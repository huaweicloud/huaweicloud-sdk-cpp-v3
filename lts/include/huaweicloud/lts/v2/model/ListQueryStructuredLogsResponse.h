
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryStructuredLogsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryStructuredLogsResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/StructLogContents.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListQueryStructuredLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQueryStructuredLogsResponse();
    virtual ~ListQueryStructuredLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQueryStructuredLogsResponse members

    /// <summary>
    /// 日志信息。
    /// </summary>

    std::vector<StructLogContents>& getStructLogs();
    bool structLogsIsSet() const;
    void unsetstructLogs();
    void setStructLogs(const std::vector<StructLogContents>& value);


protected:
    std::vector<StructLogContents> structLogs_;
    bool structLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryStructuredLogsResponse_H_
