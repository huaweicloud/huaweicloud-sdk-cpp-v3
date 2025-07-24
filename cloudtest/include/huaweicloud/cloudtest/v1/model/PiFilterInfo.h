
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PiFilterInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PiFilterInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/PiInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// pi筛选条件
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PiFilterInfo
    : public ModelBase
{
public:
    PiFilterInfo();
    virtual ~PiFilterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PiFilterInfo members

    /// <summary>
    /// pi迭代筛选条件
    /// </summary>

    std::vector<PiInfo>& getPiSprints();
    bool piSprintsIsSet() const;
    void unsetpiSprints();
    void setPiSprints(const std::vector<PiInfo>& value);

    /// <summary>
    /// pi下拉框全选标识，全选时为true
    /// </summary>

    bool isAllPi() const;
    bool allPiIsSet() const;
    void unsetallPi();
    void setAllPi(bool value);


protected:
    std::vector<PiInfo> piSprints_;
    bool piSprintsIsSet_;
    bool allPi_;
    bool allPiIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PiFilterInfo_H_
