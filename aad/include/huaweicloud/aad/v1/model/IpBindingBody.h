
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_IpBindingBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_IpBindingBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ip绑定请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  IpBindingBody
    : public ModelBase
{
public:
    IpBindingBody();
    virtual ~IpBindingBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBindingBody members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// 防护ip的id列表
    /// </summary>

    std::vector<std::string>& getIdList();
    bool idListIsSet() const;
    void unsetidList();
    void setIdList(const std::vector<std::string>& value);


protected:
    std::string packageId_;
    bool packageIdIsSet_;
    std::vector<std::string> idList_;
    bool idListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_IpBindingBody_H_
