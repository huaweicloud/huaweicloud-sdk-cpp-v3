
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAllConfigValueByTypeAndKeyResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAllConfigValueByTypeAndKeyResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowAllConfigValueByTypeAndKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAllConfigValueByTypeAndKeyResponse();
    virtual ~ShowAllConfigValueByTypeAndKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAllConfigValueByTypeAndKeyResponse members

    /// <summary>
    /// 备注
    /// </summary>

    std::string getComments() const;
    bool commentsIsSet() const;
    void unsetcomments();
    void setComments(const std::string& value);

    /// <summary>
    /// 配置键
    /// </summary>

    std::string getConfigKey() const;
    bool configKeyIsSet() const;
    void unsetconfigKey();
    void setConfigKey(const std::string& value);

    /// <summary>
    /// 配置类型
    /// </summary>

    std::string getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(const std::string& value);

    /// <summary>
    /// 配置值
    /// </summary>

    std::string getConfigValue() const;
    bool configValueIsSet() const;
    void unsetconfigValue();
    void setConfigValue(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建者
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// UUID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 修改者
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);


protected:
    std::string comments_;
    bool commentsIsSet_;
    std::string configKey_;
    bool configKeyIsSet_;
    std::string configType_;
    bool configTypeIsSet_;
    std::string configValue_;
    bool configValueIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAllConfigValueByTypeAndKeyResponse_H_
