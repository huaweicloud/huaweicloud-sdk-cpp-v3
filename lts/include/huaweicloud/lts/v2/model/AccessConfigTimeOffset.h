
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigTimeOffset_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigTimeOffset_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入偏移时间
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigTimeOffset
    : public ModelBase
{
public:
    AccessConfigTimeOffset();
    virtual ~AccessConfigTimeOffset();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessConfigTimeOffset members

    /// <summary>
    /// 偏移时间。 当\&quot;unit\&quot;选择\&quot;day\&quot;时，范围为1~7天。 当\&quot;unit\&quot;选择\&quot;hour\&quot;时，范围为1~168小时。 当\&quot;unit\&quot;选择\&quot;sec\&quot;时，范围为1~604800秒。
    /// </summary>

    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int64_t value);

    /// <summary>
    /// 偏移时间单位。day ：天，hour：小时，sec：秒
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    int64_t offset_;
    bool offsetIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigTimeOffset_H_
