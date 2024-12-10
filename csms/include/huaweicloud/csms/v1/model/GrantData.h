
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantData_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantData_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 授权返回数据
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  GrantData
    : public ModelBase
{
public:
    GrantData();
    virtual ~GrantData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GrantData members

    /// <summary>
    /// 授权id，授权给个人时存在
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 授权类型（SECRET，GROUP）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 授权目标用户id
    /// </summary>

    std::string getGranteeUser() const;
    bool granteeUserIsSet() const;
    void unsetgranteeUser();
    void setGranteeUser(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 有效期
    /// </summary>

    int64_t getValidityTime() const;
    bool validityTimeIsSet() const;
    void unsetvalidityTime();
    void setValidityTime(int64_t value);

    /// <summary>
    /// 状态
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// 签名
    /// </summary>

    std::string getSignature() const;
    bool signatureIsSet() const;
    void unsetsignature();
    void setSignature(const std::string& value);


protected:
    std::string uuid_;
    bool uuidIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string granteeUser_;
    bool granteeUserIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    int64_t validityTime_;
    bool validityTimeIsSet_;
    int32_t state_;
    bool stateIsSet_;
    std::string signature_;
    bool signatureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantData_H_
