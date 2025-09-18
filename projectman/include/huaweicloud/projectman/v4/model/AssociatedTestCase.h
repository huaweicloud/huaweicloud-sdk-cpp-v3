
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociatedTestCase_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociatedTestCase_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/StatusVo.h>
#include <huaweicloud/projectman/v4/model/SimpleProject.h>
#include <string>
#include <huaweicloud/projectman/v4/model/SimpleUser.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AssociatedTestCase
    : public ModelBase
{
public:
    AssociatedTestCase();
    virtual ~AssociatedTestCase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociatedTestCase members

    /// <summary>
    /// 用例ID
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getCaseNum() const;
    bool caseNumIsSet() const;
    void unsetcaseNum();
    void setCaseNum(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getCaseName() const;
    bool caseNameIsSet() const;
    void unsetcaseName();
    void setCaseName(const std::string& value);

    /// <summary>
    /// 用例等级
    /// </summary>

    std::string getCaseLevel() const;
    bool caseLevelIsSet() const;
    void unsetcaseLevel();
    void setCaseLevel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StatusVo getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const StatusVo& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUser getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const SimpleUser& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUser getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const SimpleUser& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleProject getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const SimpleProject& value);

    /// <summary>
    /// 是否基线
    /// </summary>

    int32_t getIsBaseLine() const;
    bool isBaseLineIsSet() const;
    void unsetisBaseLine();
    void setIsBaseLine(int32_t value);

    /// <summary>
    /// 用例类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);


protected:
    std::string caseId_;
    bool caseIdIsSet_;
    std::string caseNum_;
    bool caseNumIsSet_;
    std::string caseName_;
    bool caseNameIsSet_;
    std::string caseLevel_;
    bool caseLevelIsSet_;
    StatusVo status_;
    bool statusIsSet_;
    SimpleUser creator_;
    bool creatorIsSet_;
    SimpleUser owner_;
    bool ownerIsSet_;
    SimpleProject project_;
    bool projectIsSet_;
    int32_t isBaseLine_;
    bool isBaseLineIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociatedTestCase_H_
