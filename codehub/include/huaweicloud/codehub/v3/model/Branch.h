
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Branch_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Branch_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  Branch
    : public ModelBase
{
public:
    Branch();
    virtual ~Branch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Branch members

    /// <summary>
    /// 是否开启保护分支功能
    /// </summary>

    bool isIsProtected() const;
    bool isProtectedIsSet() const;
    void unsetisProtected();
    void setIsProtected(bool value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    bool isProtected_;
    bool isProtectedIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Branch_H_
