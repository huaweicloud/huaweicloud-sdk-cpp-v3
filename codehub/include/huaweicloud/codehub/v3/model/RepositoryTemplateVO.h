
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepositoryTemplateVO_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepositoryTemplateVO_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RepositoryTemplateVO
    : public ModelBase
{
public:
    RepositoryTemplateVO();
    virtual ~RepositoryTemplateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryTemplateVO members

    /// <summary>
    /// 模板类型
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 代码模板名称
    /// </summary>

    std::string getCodeTitle() const;
    bool codeTitleIsSet() const;
    void unsetcodeTitle();
    void setCodeTitle(const std::string& value);

    /// <summary>
    /// 创建者名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 代码模板描述
    /// </summary>

    std::string getCodeDescription() const;
    bool codeDescriptionIsSet() const;
    void unsetcodeDescription();
    void setCodeDescription(const std::string& value);

    /// <summary>
    /// 模板语言
    /// </summary>

    std::vector<std::string>& getLanguages();
    bool languagesIsSet() const;
    void unsetlanguages();
    void setLanguages(const std::vector<std::string>& value);

    /// <summary>
    /// 模板平台
    /// </summary>

    std::vector<std::string>& getPlateform();
    bool plateformIsSet() const;
    void unsetplateform();
    void setPlateform(const std::vector<std::string>& value);

    /// <summary>
    /// 模板类型
    /// </summary>

    std::vector<std::string>& getEntertype();
    bool entertypeIsSet() const;
    void unsetentertype();
    void setEntertype(const std::vector<std::string>& value);


protected:
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string codeTitle_;
    bool codeTitleIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string codeDescription_;
    bool codeDescriptionIsSet_;
    std::vector<std::string> languages_;
    bool languagesIsSet_;
    std::vector<std::string> plateform_;
    bool plateformIsSet_;
    std::vector<std::string> entertype_;
    bool entertypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepositoryTemplateVO_H_
