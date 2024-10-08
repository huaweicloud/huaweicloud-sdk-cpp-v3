
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListConnectionNumberData_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListConnectionNumberData_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/ListConnectionNumberDataList.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListConnectionNumberData
    : public ModelBase
{
public:
    ListConnectionNumberData();
    virtual ~ListConnectionNumberData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConnectionNumberData members

    /// <summary>
    /// 连接数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// items
    /// </summary>

    std::vector<ListConnectionNumberDataList>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<ListConnectionNumberDataList>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<ListConnectionNumberDataList> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListConnectionNumberData_H_
