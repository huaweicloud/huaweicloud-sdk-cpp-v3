
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseModifySettingV2Req_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseModifySettingV2Req_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cloudtable/v2/model/HbaseModifySettingV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改配置v2接口请求参数
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  HbaseModifySettingV2Req
    : public ModelBase
{
public:
    HbaseModifySettingV2Req();
    virtual ~HbaseModifySettingV2Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HbaseModifySettingV2Req members

    /// <summary>
    /// 是否重启
    /// </summary>

    std::string getIsReboot() const;
    bool isRebootIsSet() const;
    void unsetisReboot();
    void setIsReboot(const std::string& value);

    /// <summary>
    /// 参见HBaseModifySettingV2结构说明
    /// </summary>

    std::vector<HbaseModifySettingV2>& getHbaseModifySettings();
    bool hbaseModifySettingsIsSet() const;
    void unsethbaseModifySettings();
    void setHbaseModifySettings(const std::vector<HbaseModifySettingV2>& value);


protected:
    std::string isReboot_;
    bool isRebootIsSet_;
    std::vector<HbaseModifySettingV2> hbaseModifySettings_;
    bool hbaseModifySettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseModifySettingV2Req_H_
