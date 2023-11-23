
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateTdeStatusRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateTdeStatusRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// sqlserverTDE开关信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateTdeStatusRequestBody
    : public ModelBase
{
public:
    UpdateTdeStatusRequestBody();
    virtual ~UpdateTdeStatusRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTdeStatusRequestBody members

    /// <summary>
    /// 轮转天数
    /// </summary>

    int32_t getRotateDay() const;
    bool rotateDayIsSet() const;
    void unsetrotateDay();
    void setRotateDay(int32_t value);

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getSecretId() const;
    bool secretIdIsSet() const;
    void unsetsecretId();
    void setSecretId(const std::string& value);

    /// <summary>
    /// 密钥名称
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 密钥版本
    /// </summary>

    std::string getSecretVersion() const;
    bool secretVersionIsSet() const;
    void unsetsecretVersion();
    void setSecretVersion(const std::string& value);


protected:
    int32_t rotateDay_;
    bool rotateDayIsSet_;
    std::string secretId_;
    bool secretIdIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    std::string secretVersion_;
    bool secretVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateTdeStatusRequestBody_H_
