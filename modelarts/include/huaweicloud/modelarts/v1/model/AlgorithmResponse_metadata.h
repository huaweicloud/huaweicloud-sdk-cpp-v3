
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_metadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_metadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法的元数据，描述算法基本信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_metadata
    : public ModelBase
{
public:
    AlgorithmResponse_metadata();
    virtual ~AlgorithmResponse_metadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_metadata members

    /// <summary>
    /// **参数解释**：算法id，创建算法时无需填写。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 算法名称。限制为1-64位只含数字、字母、下划线和中划线的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对算法的描述，默认为“NULL”，字符串的长度限制为[0, 256]。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 指定算法所处的工作空间，默认值为“0”。“0” 为默认的工作空间。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 指定算法所属的ai项目，默认值为\&quot;default-ai-project\&quot;。ai项目已下线，无需关注。
    /// </summary>

    std::string getAiProject() const;
    bool aiProjectIsSet() const;
    void unsetaiProject();
    void setAiProject(const std::string& value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户的domainID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 算法来源类型。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 算法api版本，标识新旧版。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：算法可用性。 **取值范围**： - true：可用 - false：不可用
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);

    /// <summary>
    /// 算法状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 算法标签。
    /// </summary>

    std::vector<std::map<std::string, std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::map<std::string, std::string>>& value);

    /// <summary>
    /// 算法属性列表。
    /// </summary>

    std::vector<std::string>& getAttrList();
    bool attrListIsSet() const;
    void unsetattrList();
    void setAttrList(const std::vector<std::string>& value);

    /// <summary>
    /// 算法版本数量，默认为0。
    /// </summary>

    int32_t getVersionNum() const;
    bool versionNumIsSet() const;
    void unsetversionNum();
    void setVersionNum(int32_t value);

    /// <summary>
    /// 算法大小。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 算法创建时间戳。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 算法更新时间戳。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string aiProject_;
    bool aiProjectIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    bool isValid_;
    bool isValidIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::vector<std::map<std::string, std::string>> tags_;
    bool tagsIsSet_;
    std::vector<std::string> attrList_;
    bool attrListIsSet_;
    int32_t versionNum_;
    bool versionNumIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_metadata_H_
