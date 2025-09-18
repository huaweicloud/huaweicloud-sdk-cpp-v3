
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_TemplateListV4ResponseBody_templates_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_TemplateListV4ResponseBody_templates_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  TemplateListV4ResponseBody_templates
    : public ModelBase
{
public:
    TemplateListV4ResponseBody_templates();
    virtual ~TemplateListV4ResponseBody_templates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateListV4ResponseBody_templates members

    /// <summary>
    /// 模板id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// 工作项类型id
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);

    /// <summary>
    /// 工作项详情模板描述内容
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板配置
    /// </summary>

    std::string getIssueFieldConfig() const;
    bool issueFieldConfigIsSet() const;
    void unsetissueFieldConfig();
    void setIssueFieldConfig(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string issueFieldConfig_;
    bool issueFieldConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_TemplateListV4ResponseBody_templates_H_
