
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleBusinessInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleBusinessInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RoleKnowledgeLibraryInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 角色业务配置基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RoleBusinessInfo
    : public ModelBase
{
public:
    RoleBusinessInfo();
    virtual ~RoleBusinessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoleBusinessInfo members

    /// <summary>
    /// 角色业务配置ID。
    /// </summary>

    std::string getRoleBusinessId() const;
    bool roleBusinessIdIsSet() const;
    void unsetroleBusinessId();
    void setRoleBusinessId(const std::string& value);

    /// <summary>
    /// 角色ID。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 提示词。
    /// </summary>

    std::string getPrompt() const;
    bool promptIsSet() const;
    void unsetprompt();
    void setPrompt(const std::string& value);

    /// <summary>
    /// 知识库列表
    /// </summary>

    std::vector<RoleKnowledgeLibraryInfo>& getKnowledgeLibraryList();
    bool knowledgeLibraryListIsSet() const;
    void unsetknowledgeLibraryList();
    void setKnowledgeLibraryList(const std::vector<RoleKnowledgeLibraryInfo>& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string roleBusinessId_;
    bool roleBusinessIdIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    std::string prompt_;
    bool promptIsSet_;
    std::vector<RoleKnowledgeLibraryInfo> knowledgeLibraryList_;
    bool knowledgeLibraryListIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleBusinessInfo_H_
