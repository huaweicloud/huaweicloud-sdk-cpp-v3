
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponsebody_availability_zone_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponsebody_availability_zone_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/ShowAvailableAzResponsebody_locales.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAvailableAzResponsebody_availability_zone
    : public ModelBase
{
public:
    ShowAvailableAzResponsebody_availability_zone();
    virtual ~ShowAvailableAzResponsebody_availability_zone();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAvailableAzResponsebody_availability_zone members

    /// <summary>
    /// 可用区ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 显示名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShowAvailableAzResponsebody_locales getLocales() const;
    bool localesIsSet() const;
    void unsetlocales();
    void setLocales(const ShowAvailableAzResponsebody_locales& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 局点ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    ShowAvailableAzResponsebody_locales locales_;
    bool localesIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponsebody_availability_zone_H_
