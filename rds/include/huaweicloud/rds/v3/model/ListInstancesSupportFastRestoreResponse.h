
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesSupportFastRestoreResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesSupportFastRestoreResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupportFastRestoreList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesSupportFastRestoreResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesSupportFastRestoreResponse();
    virtual ~ListInstancesSupportFastRestoreResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesSupportFastRestoreResponse members

    /// <summary>
    /// 实例的极速恢复支持情况。
    /// </summary>

    std::vector<SupportFastRestoreList>& getSupportFastRestoreList();
    bool supportFastRestoreListIsSet() const;
    void unsetsupportFastRestoreList();
    void setSupportFastRestoreList(const std::vector<SupportFastRestoreList>& value);


protected:
    std::vector<SupportFastRestoreList> supportFastRestoreList_;
    bool supportFastRestoreListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesSupportFastRestoreResponse_H_
