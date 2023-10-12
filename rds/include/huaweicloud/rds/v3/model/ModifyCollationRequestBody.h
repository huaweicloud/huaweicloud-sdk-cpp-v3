
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyCollationRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyCollationRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyCollationRequestBody
    : public ModelBase
{
public:
    ModifyCollationRequestBody();
    virtual ~ModifyCollationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyCollationRequestBody members

    /// <summary>
    /// 字符集。 取值范围：根据查询SQL Server可用字符集查询可设置的字符集。
    /// </summary>

    std::string getCollation() const;
    bool collationIsSet() const;
    void unsetcollation();
    void setCollation(const std::string& value);


protected:
    std::string collation_;
    bool collationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyCollationRequestBody_H_
