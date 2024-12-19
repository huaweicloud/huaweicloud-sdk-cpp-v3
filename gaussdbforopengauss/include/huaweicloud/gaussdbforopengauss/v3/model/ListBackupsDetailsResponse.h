
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListBackupsDetailsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListBackupsDetailsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListBackupsDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBackupsDetailsResponse();
    virtual ~ListBackupsDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBackupsDetailsResponse members

    /// <summary>
    /// 备份信息。
    /// </summary>

    std::vector<ListBackupsResult>& getBackups();
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const std::vector<ListBackupsResult>& value);

    /// <summary>
    /// 备份文件的总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::vector<ListBackupsResult> backups_;
    bool backupsIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListBackupsDetailsResponse_H_
