
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_BriefStructTemplateModel_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_BriefStructTemplateModel_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结构化模板简略对象
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  BriefStructTemplateModel
    : public ModelBase
{
public:
    BriefStructTemplateModel();
    virtual ~BriefStructTemplateModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BriefStructTemplateModel members

    /// <summary>
    /// 模板创建/更新时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 结构化类型，当前支持regex,json,split,nginx
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 项目ID，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_BriefStructTemplateModel_H_
