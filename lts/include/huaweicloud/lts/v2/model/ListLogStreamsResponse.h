
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/lts/v2/model/ListLogStreamsResponseBody1_log_streams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogStreamsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogStreamsResponse();
    virtual ~ListLogStreamsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLogStreamsResponse members

    /// <summary>
    /// 日志流数组
    /// </summary>

    std::vector<ListLogStreamsResponseBody1_log_streams>& getLogStreams();
    bool logStreamsIsSet() const;
    void unsetlogStreams();
    void setLogStreams(const std::vector<ListLogStreamsResponseBody1_log_streams>& value);


protected:
    std::vector<ListLogStreamsResponseBody1_log_streams> logStreams_;
    bool logStreamsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamsResponse_H_
