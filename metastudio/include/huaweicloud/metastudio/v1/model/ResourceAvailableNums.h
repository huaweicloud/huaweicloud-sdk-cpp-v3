
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourceAvailableNums_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourceAvailableNums_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 所有类型的资源可用数量
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ResourceAvailableNums
    : public ModelBase
{
public:
    ResourceAvailableNums();
    virtual ~ResourceAvailableNums();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceAvailableNums members

    /// <summary>
    /// flexus版资源数。
    /// </summary>

    int32_t getFlexus() const;
    bool flexusIsSet() const;
    void unsetflexus();
    void setFlexus(int32_t value);

    /// <summary>
    /// 基础版资源数。
    /// </summary>

    int32_t getBasic() const;
    bool basicIsSet() const;
    void unsetbasic();
    void setBasic(int32_t value);

    /// <summary>
    /// 进阶版资源数。
    /// </summary>

    int32_t getMiddle() const;
    bool middleIsSet() const;
    void unsetmiddle();
    void setMiddle(int32_t value);

    /// <summary>
    /// 进阶测试版资源数。
    /// </summary>

    int32_t getMiddleOnDemand() const;
    bool middleOnDemandIsSet() const;
    void unsetmiddleOnDemand();
    void setMiddleOnDemand(int32_t value);

    /// <summary>
    /// 高级版资源数。
    /// </summary>

    int32_t getAdvance() const;
    bool advanceIsSet() const;
    void unsetadvance();
    void setAdvance(int32_t value);

    /// <summary>
    /// 出门问问资源数。
    /// </summary>

    int32_t getThirdPartyCmww() const;
    bool thirdPartyCmwwIsSet() const;
    void unsetthirdPartyCmww();
    void setThirdPartyCmww(int32_t value);


protected:
    int32_t flexus_;
    bool flexusIsSet_;
    int32_t basic_;
    bool basicIsSet_;
    int32_t middle_;
    bool middleIsSet_;
    int32_t middleOnDemand_;
    bool middleOnDemandIsSet_;
    int32_t advance_;
    bool advanceIsSet_;
    int32_t thirdPartyCmww_;
    bool thirdPartyCmwwIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourceAvailableNums_H_
