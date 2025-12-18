
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatabaseVolumeResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatabaseVolumeResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DatabaseVolumeResult
    : public ModelBase
{
public:
    DatabaseVolumeResult();
    virtual ~DatabaseVolumeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseVolumeResult members

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库的缺省表空间名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTableSpaceName() const;
    bool tableSpaceNameIsSet() const;
    void unsettableSpaceName();
    void setTableSpaceName(const std::string& value);

    /// <summary>
    /// **参数解释**: 表所属用户名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库占用空间大小。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDatabaseSize() const;
    bool databaseSizeIsSet() const;
    void unsetdatabaseSize();
    void setDatabaseSize(const std::string& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string tableSpaceName_;
    bool tableSpaceNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string databaseSize_;
    bool databaseSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatabaseVolumeResult_H_
