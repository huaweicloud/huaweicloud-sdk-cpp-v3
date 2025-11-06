

#include "huaweicloud/codeartsrepo/v3/model/MergeChangesTreesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




MergeChangesTreesDto::MergeChangesTreesDto()
{
    treeIsSet_ = false;
}

MergeChangesTreesDto::~MergeChangesTreesDto() = default;

void MergeChangesTreesDto::validate()
{
}

web::json::value MergeChangesTreesDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(treeIsSet_) {
        val[utility::conversions::to_string_t("tree")] = ModelBase::toJson(tree_);
    }

    return val;
}
bool MergeChangesTreesDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tree"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tree"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeChangesTrees> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTree(refVal);
        }
    }
    return ok;
}


std::vector<MergeChangesTrees>& MergeChangesTreesDto::getTree()
{
    return tree_;
}

void MergeChangesTreesDto::setTree(const std::vector<MergeChangesTrees>& value)
{
    tree_ = value;
    treeIsSet_ = true;
}

bool MergeChangesTreesDto::treeIsSet() const
{
    return treeIsSet_;
}

void MergeChangesTreesDto::unsettree()
{
    treeIsSet_ = false;
}

}
}
}
}
}


