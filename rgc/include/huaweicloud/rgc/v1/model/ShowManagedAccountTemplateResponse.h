
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedAccountTemplateResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedAccountTemplateResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowManagedAccountTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowManagedAccountTemplateResponse();
    virtual ~ShowManagedAccountTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowManagedAccountTemplateResponse members

    /// <summary>
    /// 管理员账号ID。
    /// </summary>

    std::string getManageAccountId() const;
    bool manageAccountIdIsSet() const;
    void unsetmanageAccountId();
    void setManageAccountId(const std::string& value);

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 纳管账号名称。
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 模板ID。
    /// </summary>

    std::string getBlueprintProductId() const;
    bool blueprintProductIdIsSet() const;
    void unsetblueprintProductId();
    void setBlueprintProductId(const std::string& value);

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getBlueprintProductName() const;
    bool blueprintProductNameIsSet() const;
    void unsetblueprintProductName();
    void setBlueprintProductName(const std::string& value);

    /// <summary>
    /// 模板版本。
    /// </summary>

    std::string getBlueprintProductVersion() const;
    bool blueprintProductVersionIsSet() const;
    void unsetblueprintProductVersion();
    void setBlueprintProductVersion(const std::string& value);

    /// <summary>
    /// 模板部署状态，包括失败, 完成, 进行中。
    /// </summary>

    std::string getBlueprintStatus() const;
    bool blueprintStatusIsSet() const;
    void unsetblueprintStatus();
    void setBlueprintStatus(const std::string& value);

    /// <summary>
    /// 模板实现类型。
    /// </summary>

    std::string getBlueprintProductImplType() const;
    bool blueprintProductImplTypeIsSet() const;
    void unsetblueprintProductImplType();
    void setBlueprintProductImplType(const std::string& value);

    /// <summary>
    /// 模板详情
    /// </summary>

    std::string getBlueprintProductImplDetail() const;
    bool blueprintProductImplDetailIsSet() const;
    void unsetblueprintProductImplDetail();
    void setBlueprintProductImplDetail(const std::string& value);


protected:
    std::string manageAccountId_;
    bool manageAccountIdIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountName_;
    bool accountNameIsSet_;
    std::string blueprintProductId_;
    bool blueprintProductIdIsSet_;
    std::string blueprintProductName_;
    bool blueprintProductNameIsSet_;
    std::string blueprintProductVersion_;
    bool blueprintProductVersionIsSet_;
    std::string blueprintStatus_;
    bool blueprintStatusIsSet_;
    std::string blueprintProductImplType_;
    bool blueprintProductImplTypeIsSet_;
    std::string blueprintProductImplDetail_;
    bool blueprintProductImplDetailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedAccountTemplateResponse_H_
