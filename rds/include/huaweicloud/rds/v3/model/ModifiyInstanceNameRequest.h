
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifiyInstanceNameRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifiyInstanceNameRequest_H_


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
/// 修改实例名称必填。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifiyInstanceNameRequest
    : public ModelBase
{
public:
    ModifiyInstanceNameRequest();
    virtual ~ModifiyInstanceNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifiyInstanceNameRequest members

    /// <summary>
    /// 实例名称。  用于表示实例的名称，同一租户下，同类型的实例名可重名。取值范围如下：  - MySQL数据库支持的字符长度是4~64个字符，必须以字母开头，区分大小写，可以包含字母、数字、中文字符、中划线或者下划线，不能包含其他的特殊字符。 - PostgreSQL和SQL Server数据库支持的字符长度是4~64个字符，必须以字母开头，区分大小写，可以包含字母、数字、中划线或者下划线，不能包含其他的特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifiyInstanceNameRequest_H_
