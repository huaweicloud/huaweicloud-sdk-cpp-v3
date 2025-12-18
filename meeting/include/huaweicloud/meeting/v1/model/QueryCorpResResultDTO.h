
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpResResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpResResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QueryCorpVcResResultDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询企业资源的返回结果。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryCorpResResultDTO
    : public ModelBase
{
public:
    QueryCorpResResultDTO();
    virtual ~QueryCorpResResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCorpResResultDTO members

    /// <summary>
    /// 
    /// </summary>

    QueryCorpVcResResultDTO getCorpVcRes() const;
    bool corpVcResIsSet() const;
    void unsetcorpVcRes();
    void setCorpVcRes(const QueryCorpVcResResultDTO& value);


protected:
    QueryCorpVcResResultDTO corpVcRes_;
    bool corpVcResIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpResResultDTO_H_
