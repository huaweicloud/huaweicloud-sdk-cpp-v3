
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DownloadAuditReportRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DownloadAuditReportRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DownloadAuditReportRequest
    : public ModelBase
{
public:
    DownloadAuditReportRequest();
    virtual ~DownloadAuditReportRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadAuditReportRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 报表ID。可通过查询报表接口ID值获取。 **约束限制**： 不涉及 **取值范围**： 以查询报表接口值为准，字符长度16-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 语言区域。 **约束限制**： 仅支持取值范围约定的值 **取值范围**： - en-us : 英语 - zh-cn : 中文 **默认取值**： en-us 
    /// </summary>

    std::string getLocal() const;
    bool localIsSet() const;
    void unsetlocal();
    void setLocal(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string local_;
    bool localIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadAuditReportRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadAuditReportRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DownloadAuditReportRequest_H_
