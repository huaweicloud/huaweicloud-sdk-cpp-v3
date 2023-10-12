
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RelatedInstance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RelatedInstance_H_


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
/// 所关联的数据库实例列表。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RelatedInstance
    : public ModelBase
{
public:
    RelatedInstance();
    virtual ~RelatedInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelatedInstance members

    /// <summary>
    /// 关联实例id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 关联实例类型。  - “replica_of”对应于“主实例”。 - “replica”对应于“只读实例”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RelatedInstance_H_
