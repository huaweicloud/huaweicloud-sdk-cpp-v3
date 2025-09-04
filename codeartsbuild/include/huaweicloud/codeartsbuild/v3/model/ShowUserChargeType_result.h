
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserChargeType_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserChargeType_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ShowUserChargeType_result_main_resource_list.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 当前租户（计费）类型
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowUserChargeType_result
    : public ModelBase
{
public:
    ShowUserChargeType_result();
    virtual ~ShowUserChargeType_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserChargeType_result members

    /// <summary>
    /// 套餐类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 计费类型
    /// </summary>

    std::string getChargeType() const;
    bool chargeTypeIsSet() const;
    void unsetchargeType();
    void setChargeType(const std::string& value);

    /// <summary>
    /// 计费类型
    /// </summary>

    std::vector<ShowUserChargeType_result_main_resource_list>& getMainResourceList();
    bool mainResourceListIsSet() const;
    void unsetmainResourceList();
    void setMainResourceList(const std::vector<ShowUserChargeType_result_main_resource_list>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string chargeType_;
    bool chargeTypeIsSet_;
    std::vector<ShowUserChargeType_result_main_resource_list> mainResourceList_;
    bool mainResourceListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserChargeType_result_H_
