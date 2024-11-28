
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasResponseBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasResponseBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/PageInfo.h>
#include <vector>
#include <huaweicloud/kms/v2/model/AliasEntity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询别名响应消息体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListAliasResponseBody
    : public ModelBase
{
public:
    ListAliasResponseBody();
    virtual ~ListAliasResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAliasResponseBody members

    /// <summary>
    /// 密钥关联的所有别名
    /// </summary>

    std::vector<AliasEntity>& getAliases();
    bool aliasesIsSet() const;
    void unsetaliases();
    void setAliases(const std::vector<AliasEntity>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<AliasEntity> aliases_;
    bool aliasesIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasResponseBody_H_
