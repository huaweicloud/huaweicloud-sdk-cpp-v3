
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditReportTemplatesResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditReportTemplatesResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/TemplateInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditReportTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditReportTemplatesResponse();
    virtual ~ListAuditReportTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditReportTemplatesResponse members

    /// <summary>
    /// os类型
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 模板列表
    /// </summary>

    std::vector<TemplateInfo>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<TemplateInfo>& value);


protected:
    std::string osType_;
    bool osTypeIsSet_;
    std::vector<TemplateInfo> templates_;
    bool templatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditReportTemplatesResponse_H_
