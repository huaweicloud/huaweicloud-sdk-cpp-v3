
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelListResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelListResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/LabelEntity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  LabelListResponse
    : public ModelBase
{
public:
    LabelListResponse();
    virtual ~LabelListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LabelListResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<LabelEntity>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<LabelEntity>& value);

    /// <summary>
    /// 标签总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<LabelEntity> data_;
    bool dataIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelListResponse_H_
