
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_volume.h>
#include <huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_ha.h>
#include <huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_tags_info.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_pay_info.h>
#include <huaweicloud/gaussdb/v3/model/ClickHouseEngineInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建ClickHouse实例请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChInstanceRequestBody
    : public ModelBase
{
public:
    CreateChInstanceRequestBody();
    virtual ~CreateChInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChInstanceRequestBody members

    /// <summary>
    /// ClickHouse实例名称。 - 4位到64位之间 - 必须以字母开头，可以包含字母、数字、中划线或下划线 - 不能包含其他特殊字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ClickHouseEngineInfo getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const ClickHouseEngineInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateChInstanceRequestBody_ha getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const CreateChInstanceRequestBody_ha& value);

    /// <summary>
    /// 节点规格ID，可通过“HTAP查询规格信息”获取。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// root账户密码。 - 8~32个字符 - 包含大写字母、小写字母、数字或特殊字符(~ ! @ # % ^ * - _ &#x3D; + ? ,)中的三种
    /// </summary>

    std::string getDbRootPwd() const;
    bool dbRootPwdIsSet() const;
    void unsetdbRootPwd();
    void setDbRootPwd(const std::string& value);

    /// <summary>
    /// 可用区类型。 取值范围： - single：单可用区 - double：多可用区
    /// </summary>

    std::string getAzMode() const;
    bool azModeIsSet() const;
    void unsetazMode();
    void setAzMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateChInstanceRequestBody_volume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const CreateChInstanceRequestBody_volume& value);

    /// <summary>
    /// 可用区码。  当ha中mode为Ha时，需要填写多个可用区，用\&quot;,\&quot; 分隔。例如：cn-southwest-244b,cn-southwest-244a
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 时区。默认为所属GaussDB(for MySQL)实例时区。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateChInstanceRequestBody_tags_info getTagsInfo() const;
    bool tagsInfoIsSet() const;
    void unsettagsInfo();
    void setTagsInfo(const CreateChInstanceRequestBody_tags_info& value);

    /// <summary>
    /// 
    /// </summary>

    CreateChInstanceRequestBody_pay_info getPayInfo() const;
    bool payInfoIsSet() const;
    void unsetpayInfo();
    void setPayInfo(const CreateChInstanceRequestBody_pay_info& value);


protected:
    std::string name_;
    bool nameIsSet_;
    ClickHouseEngineInfo engine_;
    bool engineIsSet_;
    CreateChInstanceRequestBody_ha ha_;
    bool haIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string dbRootPwd_;
    bool dbRootPwdIsSet_;
    std::string azMode_;
    bool azModeIsSet_;
    CreateChInstanceRequestBody_volume volume_;
    bool volumeIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    CreateChInstanceRequestBody_tags_info tagsInfo_;
    bool tagsInfoIsSet_;
    CreateChInstanceRequestBody_pay_info payInfo_;
    bool payInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_H_
