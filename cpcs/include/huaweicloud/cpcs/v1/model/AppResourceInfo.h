
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AppResourceInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AppResourceInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CPCS_V1_EXPORT  AppResourceInfo
    : public ModelBase
{
public:
    AppResourceInfo();
    virtual ~AppResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppResourceInfo members

    /// <summary>
    /// 当前租户在cpcs创建的简单应用数量
    /// </summary>

    int32_t getAppNum() const;
    bool appNumIsSet() const;
    void unsetappNum();
    void setAppNum(int32_t value);


protected:
    int32_t appNum_;
    bool appNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AppResourceInfo_H_
