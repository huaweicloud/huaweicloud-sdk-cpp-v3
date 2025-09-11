
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowSqlDetailResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowSqlDetailResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SqlDetailBean.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowSqlDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSqlDetailResponse();
    virtual ~ShowSqlDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSqlDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    SqlDetailBean getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const SqlDetailBean& value);


protected:
    SqlDetailBean sql_;
    bool sqlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowSqlDetailResponse_H_
