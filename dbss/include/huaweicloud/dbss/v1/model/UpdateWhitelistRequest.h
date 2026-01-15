
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateWhitelistRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateWhitelistRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  UpdateWhitelistRequest
    : public ModelBase
{
public:
    UpdateWhitelistRequest();
    virtual ~UpdateWhitelistRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWhitelistRequest members

    /// <summary>
    /// 数据库ID列表
    /// </summary>

    std::vector<std::string>& getDbIds();
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::vector<std::string>& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 是否启用  - true：启用  - false：禁用
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::vector<std::string> dbIds_;
    bool dbIdsIsSet_;
    std::string desc_;
    bool descIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateWhitelistRequest_H_
