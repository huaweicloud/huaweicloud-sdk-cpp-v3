
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_WeakPasswordCheckRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_WeakPasswordCheckRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  WeakPasswordCheckRequestBody
    : public ModelBase
{
public:
    WeakPasswordCheckRequestBody();
    virtual ~WeakPasswordCheckRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WeakPasswordCheckRequestBody members

    /// <summary>
    /// 密码
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_WeakPasswordCheckRequestBody_H_
