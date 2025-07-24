
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AvailableConfig_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AvailableConfig_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AvailableConfig
    : public ModelBase
{
public:
    AvailableConfig();
    virtual ~AvailableConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AvailableConfig members

    /// <summary>
    /// 自定义关键字是否开通
    /// </summary>

    bool isCustomAwAvailable() const;
    bool customAwAvailableIsSet() const;
    void unsetcustomAwAvailable();
    void setCustomAwAvailable(bool value);

    /// <summary>
    /// 系统关键字是否开通
    /// </summary>

    bool isPublicAwAvailable() const;
    bool publicAwAvailableIsSet() const;
    void unsetpublicAwAvailable();
    void setPublicAwAvailable(bool value);

    /// <summary>
    /// 一键刷新功能是否开通
    /// </summary>

    bool isRefreshAwAvailable() const;
    bool refreshAwAvailableIsSet() const;
    void unsetrefreshAwAvailable();
    void setRefreshAwAvailable(bool value);


protected:
    bool customAwAvailable_;
    bool customAwAvailableIsSet_;
    bool publicAwAvailable_;
    bool publicAwAvailableIsSet_;
    bool refreshAwAvailable_;
    bool refreshAwAvailableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AvailableConfig_H_
