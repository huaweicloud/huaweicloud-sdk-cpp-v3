
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertTemplateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertTemplateVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AlertLevel.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlertTemplateVo
    : public ModelBase
{
public:
    AlertTemplateVo();
    virtual ~AlertTemplateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertTemplateVo members

    /// <summary>
    /// 告警级别列表
    /// </summary>

    std::vector<AlertLevel>& getAlertLevels();
    bool alertLevelsIsSet() const;
    void unsetalertLevels();
    void setAlertLevels(const std::vector<AlertLevel>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 唯一ID，主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 告警模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 服务ID
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);


protected:
    std::vector<AlertLevel> alertLevels_;
    bool alertLevelsIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string remarks_;
    bool remarksIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertTemplateVo_H_
