
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_VodRetrievalData_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_VodRetrievalData_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  VodRetrievalData
    : public ModelBase
{
public:
    VodRetrievalData();
    virtual ~VodRetrievalData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VodRetrievalData members

    /// <summary>
    /// 低频取回量 
    /// </summary>

    double getRetrievalWarm() const;
    bool retrievalWarmIsSet() const;
    void unsetretrievalWarm();
    void setRetrievalWarm(double value);

    /// <summary>
    /// 归档标准取回量 
    /// </summary>

    double getRetrievalCold() const;
    bool retrievalColdIsSet() const;
    void unsetretrievalCold();
    void setRetrievalCold(double value);

    /// <summary>
    /// 归档快速取回量 
    /// </summary>

    double getRetrievalColdSpeed() const;
    bool retrievalColdSpeedIsSet() const;
    void unsetretrievalColdSpeed();
    void setRetrievalColdSpeed(double value);


protected:
    double retrievalWarm_;
    bool retrievalWarmIsSet_;
    double retrievalCold_;
    bool retrievalColdIsSet_;
    double retrievalColdSpeed_;
    bool retrievalColdSpeedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_VodRetrievalData_H_
