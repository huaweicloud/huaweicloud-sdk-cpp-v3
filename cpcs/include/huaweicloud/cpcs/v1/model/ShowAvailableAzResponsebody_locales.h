
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponsebody_locales_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponsebody_locales_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 区域名称
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAvailableAzResponsebody_locales
    : public ModelBase
{
public:
    ShowAvailableAzResponsebody_locales();
    virtual ~ShowAvailableAzResponsebody_locales();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAvailableAzResponsebody_locales members

    /// <summary>
    /// 英文
    /// </summary>

    std::string getEnUs() const;
    bool enUsIsSet() const;
    void unsetenUs();
    void setEnUs(const std::string& value);

    /// <summary>
    /// 中文
    /// </summary>

    std::string getZhCn() const;
    bool zhCnIsSet() const;
    void unsetzhCn();
    void setZhCn(const std::string& value);


protected:
    std::string enUs_;
    bool enUsIsSet_;
    std::string zhCn_;
    bool zhCnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponsebody_locales_H_
