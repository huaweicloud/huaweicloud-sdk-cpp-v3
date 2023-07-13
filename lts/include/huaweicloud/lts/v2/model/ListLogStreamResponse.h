
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LogStream.h>
#include <vector>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogStreamResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogStreamResponse();
    virtual ~ListLogStreamResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLogStreamResponse members

    /// <summary>
    /// 日志组数组。
    /// </summary>

    std::vector<LogStream>& getLogStreams();
    bool logStreamsIsSet() const;
    void unsetlogStreams();
    void setLogStreams(const std::vector<LogStream>& value);


protected:
    std::vector<LogStream> logStreams_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamResponse_H_
