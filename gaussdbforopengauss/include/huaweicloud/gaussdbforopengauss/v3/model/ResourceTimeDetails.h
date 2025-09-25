
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceTimeDetails_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceTimeDetails_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源耗时详细信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ResourceTimeDetails
    : public ModelBase
{
public:
    ResourceTimeDetails();
    virtual ~ResourceTimeDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceTimeDetails members

    /// <summary>
    /// **参数解释**: CPU时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getCpuTime() const;
    bool cpuTimeIsSet() const;
    void unsetcpuTime();
    void setCpuTime(int64_t value);

    /// <summary>
    /// **参数解释**: IO上的时间花费（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getDataIoTime() const;
    bool dataIoTimeIsSet() const;
    void unsetdataIoTime();
    void setDataIoTime(int64_t value);

    /// <summary>
    /// **参数解释**: 其余耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getOtherTime() const;
    bool otherTimeIsSet() const;
    void unsetotherTime();
    void setOtherTime(int64_t value);


protected:
    int64_t cpuTime_;
    bool cpuTimeIsSet_;
    int64_t dataIoTime_;
    bool dataIoTimeIsSet_;
    int64_t otherTime_;
    bool otherTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceTimeDetails_H_
