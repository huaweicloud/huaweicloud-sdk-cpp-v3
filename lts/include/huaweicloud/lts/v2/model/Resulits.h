
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Resulits_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Resulits_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Resulits
    : public ModelBase
{
public:
    Resulits();
    virtual ~Resulits();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Resulits members

    /// <summary>
    /// 时间戳，毫秒时间
    /// </summary>

    int64_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int64_t value);

    /// <summary>
    /// 流量，byte
    /// </summary>

    double getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(double value);


protected:
    int64_t timestamp_;
    bool timestampIsSet_;
    double value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Resulits_H_
