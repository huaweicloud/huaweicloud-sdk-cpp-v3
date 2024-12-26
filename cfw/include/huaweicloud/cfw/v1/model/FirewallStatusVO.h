
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallStatusVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallStatusVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  FirewallStatusVO
    : public ModelBase
{
public:
    FirewallStatusVO();
    virtual ~FirewallStatusVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FirewallStatusVO members

    /// <summary>
    /// 可防护eip数量
    /// </summary>

    int32_t getAvailableEipCount() const;
    bool availableEipCountIsSet() const;
    void unsetavailableEipCount();
    void setAvailableEipCount(int32_t value);

    /// <summary>
    /// 是否超出eip数量限制
    /// </summary>

    bool isBeyondMaxCount() const;
    bool beyondMaxCountIsSet() const;
    void unsetbeyondMaxCount();
    void setBeyondMaxCount(bool value);

    /// <summary>
    /// 已防护eip数量
    /// </summary>

    int32_t getEipProtectedSelf() const;
    bool eipProtectedSelfIsSet() const;
    void unseteipProtectedSelf();
    void setEipProtectedSelf(int32_t value);

    /// <summary>
    /// eip总数
    /// </summary>

    int32_t getEipTotal() const;
    bool eipTotalIsSet() const;
    void unseteipTotal();
    void setEipTotal(int32_t value);

    /// <summary>
    /// 未防护eip数量
    /// </summary>

    int32_t getEipUnProtected() const;
    bool eipUnProtectedIsSet() const;
    void unseteipUnProtected();
    void setEipUnProtected(int32_t value);

    /// <summary>
    /// 防护对象id
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 是否开启新增eip自动防护，1；是，0：否
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t availableEipCount_;
    bool availableEipCountIsSet_;
    bool beyondMaxCount_;
    bool beyondMaxCountIsSet_;
    int32_t eipProtectedSelf_;
    bool eipProtectedSelfIsSet_;
    int32_t eipTotal_;
    bool eipTotalIsSet_;
    int32_t eipUnProtected_;
    bool eipUnProtectedIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallStatusVO_H_
