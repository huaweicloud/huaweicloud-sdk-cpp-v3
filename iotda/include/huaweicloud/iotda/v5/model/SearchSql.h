
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchSql_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchSql_H_


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
/// 设备搜索请求结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  SearchSql
    : public ModelBase
{
public:
    SearchSql();
    virtual ~SearchSql();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchSql members

    /// <summary>
    /// 搜索sql语句，具体使用方法见类SQL语法使用说明章节
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);


protected:
    std::string sql_;
    bool sqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchSql_H_
