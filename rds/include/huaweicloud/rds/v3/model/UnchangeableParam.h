
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UnchangeableParam_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UnchangeableParam_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  UnchangeableParam
    : public ModelBase
{
public:
    UnchangeableParam();
    virtual ~UnchangeableParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UnchangeableParam members

    /// <summary>
    /// 表名大小写是否敏感，默认值是“1”，当前仅MySQL 8.0支持。 取值范围： - 0：表名被存储成固定且表名称大小写敏感。 - 1：表名将被存储成小写且表名称大小写不敏感。
    /// </summary>

    std::string getLowerCaseTableNames() const;
    bool lowerCaseTableNamesIsSet() const;
    void unsetlowerCaseTableNames();
    void setLowerCaseTableNames(const std::string& value);


protected:
    std::string lowerCaseTableNames_;
    bool lowerCaseTableNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UnchangeableParam_H_
