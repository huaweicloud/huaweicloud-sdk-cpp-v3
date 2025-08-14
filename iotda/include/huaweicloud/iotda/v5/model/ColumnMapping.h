
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ColumnMapping_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ColumnMapping_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库的列和流转数据的对应关系。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ColumnMapping
    : public ModelBase
{
public:
    ColumnMapping();
    virtual ~ColumnMapping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColumnMapping members

    /// <summary>
    /// **参数说明**：数据库的列名
    /// </summary>

    std::string getColumnName() const;
    bool columnNameIsSet() const;
    void unsetcolumnName();
    void setColumnName(const std::string& value);

    /// <summary>
    /// **参数说明**：流转数据的属性名
    /// </summary>

    std::string getJsonKey() const;
    bool jsonKeyIsSet() const;
    void unsetjsonKey();
    void setJsonKey(const std::string& value);


protected:
    std::string columnName_;
    bool columnNameIsSet_;
    std::string jsonKey_;
    bool jsonKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ColumnMapping_H_
