
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceStorageInfoResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceStorageInfoResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceStorageInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceStorageInfoResponse();
    virtual ~ShowInstanceStorageInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceStorageInfoResponse members

    /// <summary>
    /// **参数解释**：  已使用存储空间大小，单位是GB。  **取值范围**：  大于等于0。
    /// </summary>

    double getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(double value);

    /// <summary>
    /// **参数解释**：  包年/包月购买的存储空间大小，单位是GB。  **取值范围**：  大于0。
    /// </summary>

    double getPrepaidSize() const;
    bool prepaidSizeIsSet() const;
    void unsetprepaidSize();
    void setPrepaidSize(double value);

    /// <summary>
    /// **参数解释**：  实例可使用的存储空间上限，单位是GB。  **取值范围**：  大于0。
    /// </summary>

    double getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(double value);

    /// <summary>
    /// **参数解释**：  存储类型。  **取值范围**：  - POOL：DL6存储类型。 - STANDARDPOOL：DL5存储类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    double used_;
    bool usedIsSet_;
    double prepaidSize_;
    bool prepaidSizeIsSet_;
    double limit_;
    bool limitIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceStorageInfoResponse_H_
