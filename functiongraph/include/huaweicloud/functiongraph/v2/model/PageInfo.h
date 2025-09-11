
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_PageInfo_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_PageInfo_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  PageInfo
    : public ModelBase
{
public:
    PageInfo();
    virtual ~PageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfo members

    /// <summary>
    /// 下一次读取位置
    /// </summary>

    int64_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int64_t value);

    /// <summary>
    /// 上一次读取位置
    /// </summary>

    int64_t getPreviousMarker() const;
    bool previousMarkerIsSet() const;
    void unsetpreviousMarker();
    void setPreviousMarker(int64_t value);

    /// <summary>
    /// 当前页总数
    /// </summary>

    int64_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int64_t value);


protected:
    int64_t nextMarker_;
    bool nextMarkerIsSet_;
    int64_t previousMarker_;
    bool previousMarkerIsSet_;
    int64_t currentCount_;
    bool currentCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_PageInfo_H_
