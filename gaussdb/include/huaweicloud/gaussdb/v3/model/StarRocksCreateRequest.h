
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_fe_volume.h>
#include <huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_engine.h>
#include <huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_tags_info.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_ha.h>
#include <huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_be_volume.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksCreateRequest
    : public ModelBase
{
public:
    StarRocksCreateRequest();
    virtual ~StarRocksCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksCreateRequest members

    /// <summary>
    /// 实例名称。同一租户下，同类型的实例名可重名。  取值范围：最小为4个字符，最大为64个字符且不超过64个字节，必须以字母开头，区分大小写，可以包含字母、数字、中划线、下划线，不能包含其他特殊字符。不支持中文名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksCreateRequest_engine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const StarRocksCreateRequest_engine& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksCreateRequest_ha getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const StarRocksCreateRequest_ha& value);

    /// <summary>
    /// FE节点规格ID。使用可通过查询HTAP规格响应消息中的“id”。
    /// </summary>

    std::string getFeFlavorId() const;
    bool feFlavorIdIsSet() const;
    void unsetfeFlavorId();
    void setFeFlavorId(const std::string& value);

    /// <summary>
    /// BE节点规格ID。使用可通过查询HTAP规格响应消息中的“id”。
    /// </summary>

    std::string getBeFlavorId() const;
    bool beFlavorIdIsSet() const;
    void unsetbeFlavorId();
    void setBeFlavorId(const std::string& value);

    /// <summary>
    /// 数据库密码。  取值范围：至少包含以下字符的三种：大小写字母、数字和特殊符号~!@#$%^*-_&#x3D;+?,()&amp;|.，长度8~32个字符。 建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。如果您输入弱密码，系统会自动判定密码非法。
    /// </summary>

    std::string getDbRootPwd() const;
    bool dbRootPwdIsSet() const;
    void unsetdbRootPwd();
    void setDbRootPwd(const std::string& value);

    /// <summary>
    /// FE节点数。 - 单机时固定为1 - 集群时取值[3, 10]
    /// </summary>

    int32_t getFeCount() const;
    bool feCountIsSet() const;
    void unsetfeCount();
    void setFeCount(int32_t value);

    /// <summary>
    /// BE节点数。 - 单机时固定为1 - 集群时取值[3, 10]
    /// </summary>

    int32_t getBeCount() const;
    bool beCountIsSet() const;
    void unsetbeCount();
    void setBeCount(int32_t value);

    /// <summary>
    /// 可用区类型。 当前仅支持single。
    /// </summary>

    std::string getAzMode() const;
    bool azModeIsSet() const;
    void unsetazMode();
    void setAzMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksCreateRequest_fe_volume getFeVolume() const;
    bool feVolumeIsSet() const;
    void unsetfeVolume();
    void setFeVolume(const StarRocksCreateRequest_fe_volume& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksCreateRequest_be_volume getBeVolume() const;
    bool beVolumeIsSet() const;
    void unsetbeVolume();
    void setBeVolume(const StarRocksCreateRequest_be_volume& value);

    /// <summary>
    /// 可用区代码。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 时区。默认时区为UTC+08:00。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StarRocksCreateRequest_tags_info getTagsInfo() const;
    bool tagsInfoIsSet() const;
    void unsettagsInfo();
    void setTagsInfo(const StarRocksCreateRequest_tags_info& value);


protected:
    std::string name_;
    bool nameIsSet_;
    StarRocksCreateRequest_engine engine_;
    bool engineIsSet_;
    StarRocksCreateRequest_ha ha_;
    bool haIsSet_;
    std::string feFlavorId_;
    bool feFlavorIdIsSet_;
    std::string beFlavorId_;
    bool beFlavorIdIsSet_;
    std::string dbRootPwd_;
    bool dbRootPwdIsSet_;
    int32_t feCount_;
    bool feCountIsSet_;
    int32_t beCount_;
    bool beCountIsSet_;
    std::string azMode_;
    bool azModeIsSet_;
    StarRocksCreateRequest_fe_volume feVolume_;
    bool feVolumeIsSet_;
    StarRocksCreateRequest_be_volume beVolume_;
    bool beVolumeIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    StarRocksCreateRequest_tags_info tagsInfo_;
    bool tagsInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_H_
