
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ObjWhitelist_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ObjWhitelist_H_


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
/// 添加白名单对象
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ObjWhitelist
    : public ModelBase
{
public:
    ObjWhitelist();
    virtual ~ObjWhitelist();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjWhitelist members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::vector<std::string>& getDbIds();
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::vector<std::string>& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);


protected:
    std::vector<std::string> dbIds_;
    bool dbIdsIsSet_;
    std::string desc_;
    bool descIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    std::string sql_;
    bool sqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ObjWhitelist_H_
