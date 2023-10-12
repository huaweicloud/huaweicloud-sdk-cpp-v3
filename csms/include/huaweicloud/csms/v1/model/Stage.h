
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Stage_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Stage_H_


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
/// 凭据状态。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Stage
    : public ModelBase
{
public:
    Stage();
    virtual ~Stage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Stage members

    /// <summary>
    /// 凭据的版本状态名称。  约束：最小长度1，最大长度64。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 凭据的版本状态更新的时间戳，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据的版本号标识符。 
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Stage_H_
