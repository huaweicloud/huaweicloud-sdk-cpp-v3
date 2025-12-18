
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SchemaVolumeResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SchemaVolumeResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SchemaVolumeResult
    : public ModelBase
{
public:
    SchemaVolumeResult();
    virtual ~SchemaVolumeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SchemaVolumeResult members

    /// <summary>
    /// **参数解释**: schema的大小。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getSchemaSize() const;
    bool schemaSizeIsSet() const;
    void unsetschemaSize();
    void setSchemaSize(const std::string& value);

    /// <summary>
    /// **参数解释**: schema拥有的表数量。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTableCount() const;
    bool tableCountIsSet() const;
    void unsettableCount();
    void setTableCount(const std::string& value);

    /// <summary>
    /// **参数解释**: schema所属用户名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: schema名称空间的名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getNspName() const;
    bool nspNameIsSet() const;
    void unsetnspName();
    void setNspName(const std::string& value);


protected:
    std::string schemaSize_;
    bool schemaSizeIsSet_;
    std::string tableCount_;
    bool tableCountIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string nspName_;
    bool nspNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SchemaVolumeResult_H_
