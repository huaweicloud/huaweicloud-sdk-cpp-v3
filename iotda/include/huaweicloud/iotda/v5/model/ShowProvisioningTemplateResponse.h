
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProvisioningTemplateResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProvisioningTemplateResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ProvisioningTemplateBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowProvisioningTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProvisioningTemplateResponse();
    virtual ~ShowProvisioningTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProvisioningTemplateResponse members

    /// <summary>
    /// **参数说明**：预调配模板ID。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// **参数说明**：预调配模板名称。 **取值范围**：长度不超过128，只允许中文、字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数说明**：预调配模板的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProvisioningTemplateBody getTemplateBody() const;
    bool templateBodyIsSet() const;
    void unsettemplateBody();
    void setTemplateBody(const ProvisioningTemplateBody& value);

    /// <summary>
    /// 在物联网平台创建预调配模板的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 在物联网平台更新预调配模板的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ProvisioningTemplateBody templateBody_;
    bool templateBodyIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProvisioningTemplateResponse_H_
